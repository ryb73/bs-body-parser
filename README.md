# bs-body-parser

## What is it?
Bucklescript bindings for [body-parser](https://www.npmjs.com/package/body-parser), an Express request parsing middleware.

## What state is it in?
Very incomplete.

## How do I install it?
```
npm i @ryb73/bs-body-parser
```

## How do I use it?
```reasonml
let app = Express.App.make();
Express.App.use(app, BodyParser.json());
```
