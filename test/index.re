BodyParser.json strict::true ();

/* let a k d => ; */
let dict = Js.Dict.fromList [("key", "bacon")];
Js.log @@ Js.Dict.get dict "kdey";
Js.log @@ (BatPervasives.flip Js.Dict.get) "kdey" dict;