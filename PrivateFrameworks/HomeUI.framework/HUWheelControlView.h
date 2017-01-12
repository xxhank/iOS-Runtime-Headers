/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWheelControlView : UIView <HUControlView, UIPickerViewDataSource, UIPickerViewDelegate> {
    BOOL  _canBeHighlighted;
    <HUControlViewDelegate> * _delegate;
    NSString * _identifier;
    NSNumber * _maxValue;
    NSNumber * _minValue;
    UIPickerView * _pickerView;
    NSNumber * _stepValue;
    NSFormatter * _valueFormatter;
    <HUWheelControlViewDelegate> * _wheelDelegate;
}

@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) BOOL disabled;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *maxValue;
@property (nonatomic, copy) NSNumber *minValue;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (nonatomic, copy) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSFormatter *valueFormatter;
@property (nonatomic) <HUWheelControlViewDelegate> *wheelDelegate;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_defaultMaxValue;
- (id)_defaultMinValue;
- (id)_defaultStepValue;
- (id)_defaultValueFormatter;
- (id)_formatValue:(id)arg1;
- (void)_setupConstraints;
- (int)_wheelRowForValue:(id)arg1;
- (id)_wheelValueForRow:(int)arg1;
- (BOOL)canBeHighlighted;
- (id)delegate;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisabled;
- (id)maxValue;
- (id)minValue;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)setCanBeHighlighted:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (void)setWheelDelegate:(id)arg1;
- (id)stepValue;
- (id)value;
- (id)valueFormatter;
- (id)wheelDelegate;

@end