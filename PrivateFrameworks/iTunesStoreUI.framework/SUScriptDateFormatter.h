/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject  {
    NSDateFormatter *_dateFormatter;
}

@property(copy) NSString * dateFormat;
@property unsigned int dateStyle;
@property(copy) NSString * localeIdentifier;
@property unsigned int timeStyle;
@property(readonly) unsigned int dateFormatterFullStyle;
@property(readonly) unsigned int dateFormatterLongStyle;
@property(readonly) unsigned int dateFormatterMediumStyle;
@property(readonly) unsigned int dateFormatterNoStyle;
@property(readonly) unsigned int dateFormatterShortStyle;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (unsigned int)dateFormatterShortStyle;
- (unsigned int)dateFormatterNoStyle;
- (unsigned int)dateFormatterMediumStyle;
- (unsigned int)dateFormatterLongStyle;
- (unsigned int)dateFormatterFullStyle;
- (void)setLocaleIdentifier:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (void)setTimeStyle:(unsigned int)arg1;
- (void)setDateStyle:(unsigned int)arg1;
- (id)localeIdentifier;
- (double)dateFromString:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (unsigned int)timeStyle;
- (unsigned int)dateStyle;
- (id)dateFormat;

@end