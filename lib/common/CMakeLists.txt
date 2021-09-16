# SPDX-License-Identifier: Apache-2.0

find_package(spdlog QUIET)
if(spdlog_FOUND)
else()
  message(FATAL_ERROR "Cannot find spdlog.")
endif()

wasmedge_add_library(wasmedgeCommon
  hexstr.cpp
  log.cpp
  configure.cpp
)

target_link_libraries(wasmedgeCommon
  PUBLIC
  spdlog::spdlog
)

target_include_directories(wasmedgeCommon
  PUBLIC
  ${PROJECT_BINARY_DIR}/include
  ${PROJECT_SOURCE_DIR}/include
)
