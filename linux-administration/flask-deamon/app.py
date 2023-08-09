from flask import Flask

app = Flask(__name__)

@app.route('/')
def home():
    return 'Hello, this is a simple Flask application!'

if __name__ == '__main__':
    app.run(debug=True)
