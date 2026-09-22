# cpp-lab
C++ 工程化与算法训练：CMake / Eigen / LeetCode 题解
cpp-lab
C++ 工程化与算法训练记录。
目标：把 C++ 从"会写"练到"能写进简历"——用连续的 commit 证明工程能力的成长。
这个仓库练什么
      模块
      内容
      LeetCode
      全部用 C++ 实现（不用 Python 图快）
      工程化
      CMake 工程组织、Eigen 矩阵运算、Git 工作流
      面试手撕题
      位姿插值（SLERP）、平面拟合（SVD）、Ceres 自定义残差等
进度
      日期
      内容
      题号/模块
      2026-09-22
      仓库建立
      —
  每周至少一次 commit。commit message 写清楚做了什么，不要用 "update"。
目录结构（随训练推进补充）
cpp-lab/
├── leetcode/       # 每题一个 .cpp 文件，文件名含题号
├── eigen/          # Eigen 练习（矩阵、四元数、最小二乘）
├── cmake-demo/     # CMake 工程模板
└── notes/          # 知识点笔记
训练计划（对应求职方向）
[ ] LeetCode 高频题：反转链表 / 层序遍历 / LRU 缓存 / 合并 K 个链表
[ ] Eigen 入门：矩阵运算、求解 Ax=b、四元数与旋转矩阵互转
[ ] 最小二乘拟合直线（指定 ax+by+1=0 形式）
[ ] 平面拟合（SVD 取最小奇异值对应向量）
[ ] 位姿插值：平移线性 + 旋转 SLERP
[ ] Ceres 自定义残差（点到面距离的 CostFunction）
[ ] CMake 多文件工程 + 单元测试
一些约定
- 每题独立 commit，能看出"什么时候做了什么"
- 卡住超过 40 分钟就记录问题，别硬耗
- 代码写丑没关系，持续比完美重要
