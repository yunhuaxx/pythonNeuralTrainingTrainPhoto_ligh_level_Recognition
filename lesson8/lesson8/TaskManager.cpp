#include "pch.h"
#include "TaskManager.h"
TaskManager::TaskManager()
{

}

TaskManager::~TaskManager()
{

}

IMAGE_TYPE TaskManager::AddTask(std::wstring strFilePath)
{
	return IMAGE_TYPE::AG_IMAGE;
}

void TaskManager::AddDirTask(std::wstring strDirPath)
{
	//1.for循环来枚举目录下的所有文件


	//2.每个文件都调用AddTask
}
