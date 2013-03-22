#include "SettingsLayer.h"
#include "SysMenu.h"

using namespace coocs2d;

SettingsLayer::SettingsLayer(void)
{

}

SettingsLayer::~SettingsLayer(void)
{

}

bool SettingsLayer::init(void)
{
	bool bRet = false;
	do 
	{
		CC_BREAK_IF(!CCLayer::init());

		// 设置标题字体
		CCMenuItemFont::setFontName("American Typewriter");
		CCMenuItemFont::setFontSize(18);
		// 用一个禁用状态的菜单项作为标题
		CCMenuItemFont* title1 = CCMenuItemFont::itemWithString("Sound");
		CC_BREAK_IF(!title1);
		title1->setEnabled(false);

		// 设置选项字体
		CCMenuItemFont::setFontName("Marker Felt");
		CCMenuItemFont::setFontSize(26);

		// 设置可切换的菜单项，菜单状态：开、关
		CCMenuItemToggle* item1 = CCMenuItemToggle::itemWithTarget(NULL, NULL, CCMenuItemFont::itemWithString("On"),
			CCMenuItemFont::itemWithString("Off"), NULL);

		CC_BREAK_IF(!item1);

		// 设置标题字体
		CCMenuItemFont::setFontName("American Typewriter");
		CCMenuItemFont::setFontSize(18);
		CCMenuItemFont* title2 = CCMenuItemFont::itemWithString("Music");
		CC_BREAK_IF(!title2);
		title2->setEnabled(false);

		// 设置选项字体
		CCMenuItemFont::setFontName("Marker Felt");
		CCMenuItemFont::setFontSize(26);
		CCMenuItemToggle* item2 = CCMenuItemToggle::itemWithTarget(NULL, NULL, 
			CCMenuItemFont::itemWithString("On"), CCMenuItemFont::itemWithString("Off"), NULL);
		CC_BREAK_IF(!item2);

		CCMenuItemFont::setFontName("American Typewriter");
		CCMenuItemFont::setFontSize(18);
		CCMenuItemFont* title3 = CCMenuItemFont::itemWithString("AI");
		CC_BREAK_IF(!title3);
		title3->setEnabled(false);

		CCMenuItemFont::setFontName("Marker Felt");
		CCMenuItemFont::setFontSize(26);
		CCMenuItemFont* item3 = CCMenuItemToggle::itemWithTarget(NULL, NULL, 
			CCMenuItemFont::itemWithString("Attack"), CCMenuItemFont::itemWithString("Defense"), NULL);
		CC_BREAK_IF(!item3);

		CCMenuItemFont::setFontName("American Typewriter");
		CCMenuItemFont::setFontSize(18);
		CCMenuItemFont* title4 = CCMenuItemFont::itemWithString("AI");
		CC_BREAK_IF(!title4);
		title4->setEnabled(false);

		// 设置多选项效果，首先加入一个子选项(subItems)，再加入一个包含了多个子菜单的数组
		CCMenuItemFont::setFontName("Marker Felt");
		CCMenuItemFont::setFontSize(26);
		CCMenuItemToggle* item4 = CCMenuItemToggle::itemWithTarget(NULL, NULL,
			CCMenuItemFont::itemWithString("Easy"), NULL);
		CC_BREAK_IF(!item4);
		
		CCArray< CCMenuItem* > * more_items = CCArray< CCMenuItem* >::arrayWithObject(
			CCMenuItemFont::itemWithString("Normal"), CCMenuItemFont::itemWithString("Hard"), CCMenuItemFont::itemWithString("Nightmare"), NULL);
		CC_BREAK_IF(!more_items);
		item4->getSubItems()->addObjectsFromArray(more_items);
		item4->setSelectedIndex(0);

		CCMenuItemFont::setFontName("Marker Felt");
		CCMenuItemFont::setFontSize(26);


	} while (false);
}