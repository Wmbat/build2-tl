[![build2](https://github.com/Wmbat/build2-tl/actions/workflows/build2.yaml/badge.svg)](https://github.com/Wmbat/build2-tl/actions/workflows/build2.yaml)

# TartanLlama's `expected`, `optional` & `generator`

This is the `build2` port of the `tl::expected`, `tl::optional` and `tl::generator` projects:

 - `tl::expected` : https://github.com/TartanLlama/expected
 - `tl::optional` : https://github.com/TartanLlama/optional
 - `tl::generator` : https://github.com/TartanLlama/generator
 - `build2`: https://build2.org

## Note for using this git repository as a package repository:

Because of the diverging version numbers of the packages stored here we decided to stop creating general version tag for releases like `v1.0`. We recommend users to directly use the packages version in the `main` branch or specific commits for now.
For example, in your `repositories.manifest`:

```
:
role: prerequisite
location: https://github.com/build2-packaging/tl.git#main
```

See the [Git Repositories section there](https://build2.org/bpkg/doc/bpkg-repository-types.xhtml#git%20repositories) for clarifications.

