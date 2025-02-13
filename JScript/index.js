const express = require('express');
const cors = require('cors');

const app = express();

app.use(cors());

app.listen(3000, () => {
  console.log('Server started @ port3000.');
});

app.get('/sum', function(req, res) {
  const data1 = req.body.a;
  const data2 = req.body.b;

  const add = data1 + data2;
  res.json({
    message: add,
  });
});
