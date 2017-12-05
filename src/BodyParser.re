open Express;

type jsonOptions;
external _jsonOptions : inflate::Js.boolean? => strict::Js.boolean? => unit => jsonOptions = "" [@@bs.obj];
external _json : jsonOptions => Middleware.t = "json" [@@bs.module "body-parser"];

let json ::inflate=? ::strict=? () => {
    let inflate = Option.map Js.Boolean.to_js_boolean inflate;
    let strict = Option.map Js.Boolean.to_js_boolean strict;
    _json @@ _jsonOptions ::?inflate ::?strict ();
};