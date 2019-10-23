//
//  CTMediator+WZPDatePicker.h
//  WZPDatePicker_Category
//
//  Created by mac on 2019/10/22.
//  Copyright © 2019年 mac. All rights reserved.
//

#import <CTMediator/CTMediator.h>

@interface CTMediator (WZPDatePicker)

/** 初始化只显示年份的日期选择器 */
- (UIView *)WZPDatePicker_initYearDatePickerView;

/** 初始化显示年月的日期选择器 */
- (UIView *)WZPDatePicker_initYearAndMonthDatePickerView;

/** 初始化显示年月日的日期选择器 */
- (UIView *)WZPDatePicker_initDefaultDatePickerView;

/**
 设定日期选择范围

 @param min 往前多少 根据WZPDatePickerType单位分别为 年/月/日
 @param max 往后多少 根据WZPDatePickerType单位分别为 年/月/日
 */
- (void)WZPDatePicker_setMinimum:(NSInteger)min andMaximum:(NSInteger)max;

/** 日期变动block  上一个、下一个和确认按钮事件触发 */
- (void)WZPDatePicker_datePickerViewDateChangedBlock:(void(^)(id date))block;

@end
