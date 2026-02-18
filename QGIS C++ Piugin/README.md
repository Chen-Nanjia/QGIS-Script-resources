# QGIS C++ 插件示例

[![QGIS](https://img.shields.io/badge/QGIS-3.40%2B-green)](https://qgis.org)
[![C++](https://img.shields.io/badge/C%2B%2B-17-blue)](https://isocpp.org)
[![License](https://img.shields.io/badge/License-MIT%20with%20Conditions-yellow)](LICENSE)

> ⚠️ **使用条件** | **USAGE CONDITIONS**

## 功能描述

基于 Qt5/C++ 的 QGIS 插件开发示例，展示如何在 QGIS 中集成原生 C++ 功能。

## 系统要求

- QGIS 3.40+ 
- Qt 5.15+
- CMake 3.16+
- C++17 编译器

## 安装步骤

```bash
# 1. 克隆仓库
git clone https://github.com/yourname/qgis-cpp-plugin.git
cd qgis-cpp-plugin

# 2. 创建构建目录
mkdir build && cd build

# 3. 配置（修改 QGIS 路径为您的安装位置）
cmake .. -DQGIS_ROOT=C:/OSGeo4W

# 4. 编译
cmake --build . --config Release

# 5. 安装到 QGIS 插件目录
cmake --install .