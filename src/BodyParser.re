open Express;

type jsonOptions;
[@bs.obj] external _jsonOptions : (~inflate : bool=?) => (~strict : bool=?) => unit => jsonOptions = "";
[@bs.module "body-parser"] external _json : jsonOptions => Middleware.t = "json";

let json = (~inflate=?, ~strict=?, ()) =>
    _json(_jsonOptions(~inflate?, ~strict?, ()));