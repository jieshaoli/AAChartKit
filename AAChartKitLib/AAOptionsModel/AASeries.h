//
//  AASeries.h
//  AAChartKit
//
//  Created by An An on 17/1/5.
//  Copyright © 2017年 An An. All rights reserved.
//  source code ----*** https://github.com/AAChartModel/AAChartKit ***--- source code
//

#import <Foundation/Foundation.h>

@class AAMarker,AAAnimation;

@interface AASeries : NSObject

AAPropStatementAndFuncStatement(strong, AASeries, NSNumber     *, borderRadius);
AAPropStatementAndFuncStatement(strong, AASeries, AAMarker     *, marker);
AAPropStatementAndFuncStatement(copy,   AASeries, NSString     *, stacking);
AAPropStatementAndFuncStatement(strong, AASeries, AAAnimation  *, animation);
//colorByPoint 决定了图表是否给每个数据列或每个点分配一个颜色，默认值是 false， 即默认是给每个数据类分配颜色，
//AAPropStatementAndFuncStatement(assign, AASeries, BOOL , colorByPoint);//设置为 true 则是给每个点分配颜色。
//plotOptions.series.connectNulls
//https://www.zhihu.com/question/24173311
AAPropStatementAndFuncStatement(assign, AASeries, BOOL ,          connectNulls);//设置折线是否断点重连
AAPropStatementAndFuncStatement(strong, AASeries, NSDictionary *, events);

@end
