[@react.component]
let make = (~message) => {
  <div>
    <Header />
    <p> {ReasonReact.string("HOME PAGE is here!")} </p>
    <p> {ReasonReact.string("Hello " ++ message)} </p>
    <Counter />
  </div>;
};

let default = make;
type props = {message: string};
type params = {name: string};

let getStaticProps = () =>
  Js.Promise.resolve({
    "props": {
      message: "World!",
    },
  });
