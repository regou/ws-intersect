require("webassembly")
  .load("program.wasm")
  .then(module => {
    console.log("result:" + module.exports.start());
  });
