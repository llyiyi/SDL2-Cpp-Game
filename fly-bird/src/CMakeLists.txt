project (${PROJECT_NAME})

aux_source_directory(. DIR_SRCS)
aux_source_directory(utils UTILS_SRCS)
add_executable(${PROJECT_NAME} ${DIR_SRCS} ${UTILS_SRCS})
