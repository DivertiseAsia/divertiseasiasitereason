let home = "/";
let careers = "/careers";
let contacts = "/contacts";
let careersdesigner = "/careers/designer";
let careersdeveloper = "/careers/developer";
let internshipdesign = "/internships/design";
let internshipdeveloper = "/internships/developer";
let ourwork = "/ourwork";


let ourwork_link = (category:PortfolioDataType.t) => {
  ourwork ++ "#" ++ switch(category) {
  | All => "all"
  | AI => "ai"
  | AppPlatforms => "appsandplatforms"
  | Design => "design"
  | Other => "other"
  }
}

let ourwork_link_category = (link:string):PortfolioDataType.t => {
  switch (link) {
    | "ai" => AI
    | "appsandplatforms" => AppPlatforms
    | "design" => Design
    | "other" => Other
    | "all" | _ => All
  }
}
