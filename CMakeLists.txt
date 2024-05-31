cmake_minimum_required(VERSION 3.10)  # CMake의 요구 최소 버전 지정
project(MyProject)  # 프로젝트 이름 설정

# 모든 소스 파일을 수집한다.
file(GLOB_RECURSE SOURCES "*.cpp")