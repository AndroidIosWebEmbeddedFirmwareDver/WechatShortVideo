//
//  WechatShortVideoConfig.h
//  WechatShortVideo
//
//  Created by AliThink on 15/8/18.
//  Copyright (c) 2015年 AliThink. All rights reserved.
//

//utils
#define WeALColor(r, g, b)         [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define WeALAColor(r, g, b, a)     [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define PATH_OF_DOCUMENT         [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

#ifndef WechatShortVideo_WechatShortVideoConfig_h
#define WechatShortVideo_WechatShortVideoConfig_h

#import "CALayer+AddUIColor.h"

//Video file time length limitation (Maximum Seconds)
#define VIDEO_MAX_TIME       8.0
//Video file time length limitation (Minimum Seconds)
#define VIDEO_VALID_MINTIME  0.8
//Video filename
#define VIDEO_DEFAULTNAME    @"videoReadyToUpload.mov"
//Video filepath
#define VIDEO_OUTPUTFILE     [NSURL fileURLWithPath:[PATH_OF_DOCUMENT stringByAppendingPathComponent:VIDEO_DEFAULTNAME]]

//Tip Strings pressed on the record area
#define OPERATE_RECORD_TIP  @"↑上移取消"
//Tip Strings pressed on the cancel area
#define OPERATE_CANCEL_TIP  @"松手取消"

//Save btn title
#define SAVE_BTN_TITLE      @"保存"
//Retake btn title
#define RETAKE_BTN_TITLE    @"重录"
//Record btn title
#define RECORD_BTN_TITLE    @"按住拍"

//Tip color normal
#define NORMAL_TIPCOLOR     WeALColor(42, 200, 0)
//Tip color warning
#define WARNING_TIPCOLOR    WeALColor(216, 0, 40)

#endif

