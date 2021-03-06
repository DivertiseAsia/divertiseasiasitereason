open ReasonReact;

let component = ReasonReact.statelessComponent("PageCareers");
[@bs.module]
external type1: string = "../../../../public/images/position-dev.jpg";
[@bs.module]
external type2: string = "../../../../public/images/position-design.jpg";
[@bs.module]
external type3: string = "../../../../public/images/position-game.jpg";
[@bs.module]
external type4: string = "../../../../public/images/position-art.jpg";
[@bs.module]
external flexible: string = "../../../../public/images/flexible.png";
[@bs.module]
external lovelearn: string = "../../../../public/images/lovelearning.png";
[@bs.module]
external openminded: string = "../../../../public/images/openminded.png";

[@react.component]
let make = () => {
    <MainPage
      title="Contact Us"
      keywords="divertise asia, thailand"
      description="Get in contact with Divertise Asia"
    >
      <PageHeader
        title="Contact Us"
        className="bg-gradient-color1 pt-5 page-contacts"
      >
      <div />
      </PageHeader>
      <div className="container">
        <div className="row py-5 d-block">
          <h3>
            {string(
               "Looking for technological experts to help you with your product?",
             )}
          </h3>
          <input id="emailInput" className="contact-page_invisible-input" />
          <p>
            {string("Please contact us via ")}
            <Link
              className="contact-link text-color-2"
              href="mailto:contact@divertise.asia"
              isExternal=true>
              {string("this email")}
            </Link>
          </p>
          <h3 className="pt-5"> {string("Looking to join our team?")} </h3>
          <p>
            {string("Please read our job descriptions ")}
            <Link className="contact-link" href=Links.careers>
              {string("here")}
            </Link>
            {string(", and send your resume to ")}
            <Link
              className="contact-link text-color-2"
              href="mailto:careers@divertise.asia"
              isExternal=true>
              {string("this email")}
            </Link>
          </p>
        </div>
      </div>
      <div
        className="footer-title bg-gradient-color2"
        /* <p>
             {string(
                "If you are interested in joining our team, just send your portfolio to",
              )}
             <Link
               isExternal=true
               href="mailto:careers@divertise.asia"
               className="text-contact">
               {string("careers@divertise.asia")}
             </Link>
           </p> */
      />
    </MainPage>
};
