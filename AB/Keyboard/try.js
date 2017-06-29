var request = require('request');

request.post(
    ' http://codeforces.com/api/user.rating?handle=tekfyl',
    { json: { key: 'value' } },
    function (error, response, body) {
        if (!error && response.statusCode == 200) {
            console.log(body)
        }
    }
);
