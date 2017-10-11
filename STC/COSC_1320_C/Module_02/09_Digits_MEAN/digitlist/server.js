// To be able to use the functions and commands contained within the Express module
var express = require('express');
var app = express();

// Express command to tell the server where to look for (static files) the
// index.html file (view/template for app)
app.use(express.static(__dirname + "/public"));

// Respond to the controllers request by sending data to the controller
app.get('/digitlist', function(req, res) {
  console.log("I received a GET request");

  info1 = {
    inNum: '12345',
    outNum: '12345',
  };

  info2 = {
    inNum: '15963',
    outNum: '15963'
  };

  var digitlist = [info1, info2];
  res.json(digitlist);
});

app.listen(3000);
console.log("Server running on port 3000");
