function doGet(e) {
  Logger.log(JSON.stringify(e));
  var result = 'Ok';

  if (e.parameter == 'undefined') {
    result = 'No Parameters';
  } else {
    var sheet_id = '...'; // Substitua pelo seu ID de planilha
    var sheet = SpreadsheetApp.openById(sheet_id).getActiveSheet();
    var newRow = sheet.getLastRow() + 1; 
    var rowData = [];

    // Date in column A
    var Curr_Date = new Date();
    rowData[0] = Curr_Date;
    var Curr_Time = Utilities.formatDate(Curr_Date, 'GMT-3', 'HH:mm:ss');

    // Time in column B
    rowData[1] = Curr_Time;

    for (var param in e.parameter) {
      Logger.log('In for loop, param=' + param);
      var value = stripQuotes(e.parameter[param]);
      Logger.log(param + ':' + e.parameter[param]);

      switch (param) {
        // Temperature in column C
        case 'temperature':
          rowData[2] = value;
          result = 'Temperature Written on column C'; 
          break;

        // Humidity in column D
        case 'humidity':
          rowData[3] = value;
          result += ' ,Humidity Written on column D'; 
          break;
           
        default:
          result = "unsupported parameter";
      }
    }

    Logger.log(JSON.stringify(rowData));
    var newRange = sheet.getRange(newRow, 1, 1, rowData.length);
    newRange.setValues([rowData]);
  }

  return ContentService.createTextOutput(result);
}

function stripQuotes(value) {
  return value.replace(/^["']|['"]$/g, "");
}
