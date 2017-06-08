require("webassembly")
  .load("pp.wasm")
  .then(module => {
    console.log("result:" + module.exports.start());
  });
