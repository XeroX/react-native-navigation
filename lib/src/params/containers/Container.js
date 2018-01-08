const NavigationOptions = require('./../options/NavigationOptions');

class Container {
  /**
   * @property {string} name The container's registered name
   * @property {Container[]} [topTabs]
   * @property {object} [passProps] props
   * @property {NavigationOptions} navigationOptions
   */
  constructor(params) {
    if (params.native) {
      //TODO: Hacky
      params = params.native
      this.native = true
    }
    this.name = params.name;
    if (params.topTabs) {
      params.topTabs.map((t) => new Container(t));
      this.topTabs = params.topTabs;
    }
    this.passProps = params.passProps;
    this.navigationOptions = params.navigationOptions && new NavigationOptions(params.navigationOptions);
  }
}

module.exports = Container;
