/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CAShapeLayer : CALayer 
{
}

@property CGPath *path;
@property CGColor *fillColor;
@property(copy) NSString *fillRule;
@property CGColor *strokeColor;
@property float lineWidth;
@property float miterLimit;
@property(copy) NSString *lineCap;
@property(copy) NSString *lineJoin;
@property float lineDashPhase;
@property(copy) NSArray *lineDashPattern;

+ (id)defaultValueForKey:(id)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (id)actionForKey:(id)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; NSUInteger x3; struct LayerExt {} *x4; struct Handle {} *x5; struct Object {} *x6; struct CGPoint { float x_7_1_1; float x_7_1_2; } x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct TypedArray<CA::Render::Layer> {} *x9; struct TypedArray<CA::Render::Animation> {} *x10; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; NSUInteger x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; NSUInteger x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; }*)arg1 flags:(NSUInteger*)arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)_renderLayerDefinesProperty:(NSUInteger)arg1;
     /* Encoded args for previous method: B12@0:4I8 */

- (NSUInteger)_renderLayerPropertyAnimationFlags:(NSUInteger)arg1;
- (struct CGPath { }*)path;
- (void)setPath:(struct CGPath { }*)arg1;
- (struct CGColor { }*)fillColor;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (id)fillRule;
- (void)setFillRule:(id)arg1;
- (struct CGColor { }*)strokeColor;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (float)lineWidth;
- (void)setLineWidth:(float)arg1;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg1;
- (id)lineJoin;
- (void)setLineJoin:(id)arg1;
- (id)lineCap;
- (void)setLineCap:(id)arg1;
- (id)lineDashPattern;
- (void)setLineDashPattern:(id)arg1;
- (float)lineDashPhase;
- (void)setLineDashPhase:(float)arg1;

@end