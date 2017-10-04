// to be able to use the functions and commands contained within the Express module
var express = require('express');
var app = express();
// require the mongojs module
var mongojs = require('mongojs');
var db = mongojs('multiples', ['multiples']);
// allows the server to parse the data incoming from controller
var bodyParser = require('body-parser');

// express command to tell the server where to look for (static files) the
// index.html file (view/template for app)
app.use(express.static(__dirname + "/public"));
app.use(bodyParser.json());

// respond to the controllers request by sending data to the controller
app.get('/multiples', function (req, res) {
  console.log("I received a GET request");

  // have the server find the multiples database and collection
  // docs - respond with the salary from the db
  db.multiples.find(function (err, docs) {
    // make sure server received the data from the database
    console.log(docs);
    // sends the data back to the controller
    res.json(docs);
  });
});

// listen for the post request from the controller
app.post('/multiples', function(req, res) {
  // print data it receives from the contrller to the command prompt
  console.log(req.body);
  // insert data from the view to MongoDB
  db.multiples.insert(req.body, function(err, doc) {
    // send back data to controller
    res.json(doc);
  });
});

app.delete('/multiples/:id', function (req, res) {
  // get the value of the ID from the URL
  var id = req.params.id;
  console.log(id);
  // delete salary from MongoDB
  db.multiples.remove({_id: mongojs.ObjectId(id)}, function (err, doc) {
    // send back the data being removed to the controller
    res.json(doc);
  });
});

app.listen(3000);
console.log("Server running on port 3000");
