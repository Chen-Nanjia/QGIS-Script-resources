# OSGeo4W Shell 安装 QGIS 与 Python 环境配置完整教程

[![QGIS](https://img.shields.io/badge/QGIS-3.34%2B-93b023?logo=qgis)](https://qgis.org)
[![OSGeo4W](https://img.shields.io/badge/OSGeo4W-Network%20Installer-blue)](https://qgis.org)
[![Python](https://img.shields.io/badge/Python-3.9%2B-3776ab?logo=python)](https://python.org)

> 本教程提供使用 OSGeo4W Shell 命令行安装 QGIS 及配置 Python 开发环境的完整步骤，适用于 Windows 系统。

---

## 📋 目录

- [安装方式选择](#安装方式选择)
- [方法一：命令行快速安装（推荐）](#方法一命令行快速安装推荐)
  - [1. 准备工作](#1-准备工作)
  - [2. 下载安装脚本](#2-下载安装脚本)
  - [3. 执行安装](#3-执行安装)
  - [4. 静默升级（后续使用）](#4-静默升级后续使用)
- [方法二：交互式安装](#方法二交互式安装)
- [Python 环境配置](#python-环境配置)
  - [1. 初始化环境变量](#1-初始化环境变量)
  - [2. 验证安装](#2-验证安装)
  - [3. 安装第三方库](#3-安装第三方库)
  - [4. 运行 Python 脚本](#4-运行-python-脚本)
  - [5. 配置 VS Code（可选）](#5-配置-vs-code可选)
- [常用命令速查](#常用命令速查)
  - [环境管理命令](#环境管理命令)
  - [QGIS 启动命令](#qgis-启动命令)
  - [Python 相关命令](#python-相关命令)
  - [包管理命令](#包管理命令)
  - [GDAL/OGR 命令](#gdalogr-命令)
  - [GRASS GIS 命令](#grass-gis-命令)
  - [SAGA GIS 命令](#saga-gis-命令)
  - [网络与诊断命令](#网络与诊断命令)
- [常见问题](#常见问题)
- [目录结构参考](#目录结构参考)
- [参考资源](#参考资源)

---

## 安装方式选择

| 方式 | 适用场景 | 特点 |
|------|---------|------|
| **命令行安装** | 批量部署、自动化脚本 | 快速、可复现、适合CI/CD |
| **交互式安装** | 首次安装、自定义组件 | 图形界面、组件选择灵活 |

---

## 方法一：命令行快速安装（推荐）

### 1. 准备工作

打开 **命令提示符 (CMD)** 或 **PowerShell**（建议以管理员身份运行）：

```bash
# 创建安装目录
mkdir C:\OSGeo4W
cd C:\OSGeo4W