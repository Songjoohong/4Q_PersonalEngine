#pragma once
#include <Windows.h>

class InputSystem;
class TimeSystem;
constexpr int MAX_LOADSTRING = 100;

class Engine
{
public:
	Engine(HINSTANCE hInstance);
	virtual ~Engine();

private:
	HWND m_hWnd;
	HINSTANCE m_hInstance;
	MSG m_Msg;
	WCHAR m_szTitle[MAX_LOADSTRING];
	WCHAR m_szWindowClass[MAX_LOADSTRING];
	WNDCLASSEXW m_Wcex;

	UINT m_ClientWidth;
	UINT m_ClientHeight;

	std::unique_ptr<TimeSystem> m_Time = nullptr;
	InputSystem* m_Input = nullptr;
public:
	virtual bool Initialize(UINT width, UINT height);
	virtual void Run();
	virtual void Update();
	virtual void Render();


	
};

