# Adafruit Bus IO Library
# https://github.com/adafruit/Adafruit_BusIO
# MIT License

cmake_minimum_required(VERSION 3.5)

idf_component_register(SRCS "c_data.c" "data.cpp"
                       INCLUDE_DIRS ".")

project(memory_system_data)
