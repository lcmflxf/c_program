#pragma once

//线性表的基本命令
//初始化 InitList(&L)
//清空 ClearList(&L)
//撤销 DestroyList(&L)
//判断是否为空 ListLength(L)
//线性表的长度 ListLength(L)
//取某个表元素 GetElem(L,i,&e)
//查找值为给定值x的第一个数据元素 LocateElem(L,x)
//在线性表中指定位置插入一个元素 ListInsert(&L,i,x)
//删除第i个位置上的元素 ListDelet(&L,i,&e)     ???&e???返回结点值
//将两个线性表首尾相接，构成一个新的线性表 ListLink(&L1,L2)
//将两个按某种顺序有序排列的线性表归并成一个新的有序线性表，并返回新的线性表的地址 ListMeger(&L1,L2)
//访问线性表的某个元素 visit(e)
//遍历一个线性表 ListTraverse(L)
//将线性表就地逆置 ListReverse(&L)
//复制线性表 ListCopy(L1,&L2)    L1->L2
//分解线性表 ListDivision(&L1,&L2)
