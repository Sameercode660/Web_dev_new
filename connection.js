var mysql = require('mysql');

var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "123456",
  database : 'world'
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected!");
});