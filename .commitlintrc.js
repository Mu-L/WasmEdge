module.exports = {
  extends: ["@commitlint/config-conventional"],
  rules: {
    // Set to warning level since Dependabot creates long commit message lines
    // that we have no control.
    "body-max-line-length": [1, "always", 100],
  },
};
