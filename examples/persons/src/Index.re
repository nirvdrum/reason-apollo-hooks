[%bs.raw {|require('./styles.css')|}];

ReactDOMRe.renderToElementWithId(
  <ReasonApollo.Provider client=Client.instance>
    <ApolloHooks.Provider client=Client.instance>
      <Root />
    </ApolloHooks.Provider>
  </ReasonApollo.Provider>,
  "root",
);
