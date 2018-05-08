const Container = require('./Container');

const PASS_PROPS = {
  number: 9
};
const CONTAINER = {
  name: 'myScreen',
  passProps: PASS_PROPS,
  navigationOptions: {}
};

const TOP_TABS_CONTAINER = {
  topTabs: [
    CONTAINER,
    CONTAINER
  ]
};

const NATIVE_CONTAINER = { ...CONTAINER, isNative: true };

describe('ContainerRegistry', () => {
  it('parses container correctly', () => {
    const uut = new Container(CONTAINER);
    expect(uut.name).toBe('myScreen');
    expect(uut.passProps).toEqual(PASS_PROPS);
    expect(uut.navigationOptions).toEqual({});
  });

  it('parses TopTabs container', () => {
    const uut = new Container(TOP_TABS_CONTAINER);
    expect(uut.topTabs).toEqual([CONTAINER, CONTAINER]);
  });

  it('parses Native container', () => {
    const uut = new Container(NATIVE_CONTAINER);

    expect(uut.name).toBe('myScreen');
    expect(uut.passProps).toEqual(PASS_PROPS);
    expect(uut.navigationOptions).toEqual({});
    expect(uut.isNative).toBeTruthy();
  });
});
