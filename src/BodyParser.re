open Express;

type jsonOptions;
[@bs.obj] external jsonOptions : (~inflate : bool=?) => (~strict : bool=?) => unit => jsonOptions = "";
[@bs.module "body-parser"] external json : jsonOptions => Middleware.t = "json";

let json = (~inflate=?, ~strict=?, ()) =>
    json(jsonOptions(~inflate?, ~strict?, ()));