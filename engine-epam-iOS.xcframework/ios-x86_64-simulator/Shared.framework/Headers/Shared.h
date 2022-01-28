#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedCoreCellLogic, SharedGameEngine, SharedDefaultHostProvider, SharedCoreGameConfig, SharedCoreDesiredCellsState, SharedCoreMapState, SharedKotlinUnit, SharedCoreCellConfig, SharedCoreMapConfig, SharedCoreFoodConfig, SharedCoreCellActivity, SharedCoreMyCell, SharedCoreAlienCell, SharedCoreFood, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedCoreVelocity, SharedCoreGrowIntention, SharedCoreMoveAction, SharedCoreCellProperty, SharedCoreCell, SharedCorePosition, SharedCoreVelocityCompanion;

@protocol SharedCoreGameEngine, SharedCoreEngine, SharedCoreEngineProvider, SharedHostProvider, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("CoreGameEngine")))
@protocol SharedCoreGameEngine
@required
- (void)initializeCellLogic:(SharedCoreCellLogic *)cellLogic __attribute__((swift_name("initialize(cellLogic:)")));
- (void)startGameRoomId:(NSString *)roomId isTesting:(BOOL)isTesting __attribute__((swift_name("startGame(roomId:isTesting:)")));
- (void)stopGame __attribute__((swift_name("stopGame()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameEngine")))
@interface SharedGameEngine : SharedBase <SharedCoreGameEngine>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gameEngine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGameEngine *shared __attribute__((swift_name("shared")));
- (void)initializeCellLogic:(SharedCoreCellLogic *)cellLogic __attribute__((swift_name("initialize(cellLogic:)")));
- (void)startGameRoomId:(NSString *)roomId isTesting:(BOOL)isTesting __attribute__((swift_name("startGame(roomId:isTesting:)")));
- (void)stopGame __attribute__((swift_name("stopGame()")));
@end;

__attribute__((swift_name("CoreEngineProvider")))
@protocol SharedCoreEngineProvider
@required
- (id<SharedCoreEngine>)provideEngineCellLogic:(SharedCoreCellLogic *)cellLogic __attribute__((swift_name("provideEngine(cellLogic:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultEngineProvider")))
@interface SharedDefaultEngineProvider : SharedBase <SharedCoreEngineProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedCoreEngine>)provideEngineCellLogic:(SharedCoreCellLogic *)cellLogic __attribute__((swift_name("provideEngine(cellLogic:)")));
@end;

__attribute__((swift_name("HostProvider")))
@protocol SharedHostProvider
@required
- (id)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultHostProvider")))
@interface SharedDefaultHostProvider : SharedBase <SharedHostProvider>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)defaultHostProvider __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDefaultHostProvider *shared __attribute__((swift_name("shared")));
- (id)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientUtilKt")))
@interface SharedClientUtilKt : SharedBase
+ (NSString *)clientUrlRoom:(NSString *)room __attribute__((swift_name("clientUrl(room:)")));
@end;

__attribute__((swift_name("CoreCellLogic")))
@interface SharedCoreCellLogic : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)configureGameConfig:(SharedCoreGameConfig *)gameConfig __attribute__((swift_name("configure(gameConfig:)")));
- (SharedCoreDesiredCellsState * _Nullable)handleGameUpdateMapState:(SharedCoreMapState *)mapState __attribute__((swift_name("handleGameUpdate(mapState:)")));
@end;

__attribute__((swift_name("CoreEngine")))
@protocol SharedCoreEngine
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)configureRoomId:(NSString *)roomId isTrainingRoom:(BOOL)isTrainingRoom completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("configure(roomId:isTrainingRoom:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectToRoomRoomId:(NSString *)roomId isTrainingRoom:(BOOL)isTrainingRoom completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connectToRoom(roomId:isTrainingRoom:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)startGameWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startGame(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopGameWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stopGame(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGameConfig")))
@interface SharedCoreGameConfig : SharedBase
- (instancetype)initWithTickTime:(int64_t)tickTime tickLimit:(int64_t)tickLimit cellConfig:(SharedCoreCellConfig *)cellConfig mapConfig:(SharedCoreMapConfig *)mapConfig foodConfig:(SharedCoreFoodConfig *)foodConfig __attribute__((swift_name("init(tickTime:tickLimit:cellConfig:mapConfig:foodConfig:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (SharedCoreCellConfig *)component3 __attribute__((swift_name("component3()")));
- (SharedCoreMapConfig *)component4 __attribute__((swift_name("component4()")));
- (SharedCoreFoodConfig *)component5 __attribute__((swift_name("component5()")));
- (SharedCoreGameConfig *)doCopyTickTime:(int64_t)tickTime tickLimit:(int64_t)tickLimit cellConfig:(SharedCoreCellConfig *)cellConfig mapConfig:(SharedCoreMapConfig *)mapConfig foodConfig:(SharedCoreFoodConfig *)foodConfig __attribute__((swift_name("doCopy(tickTime:tickLimit:cellConfig:mapConfig:foodConfig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCoreCellConfig *cellConfig __attribute__((swift_name("cellConfig")));
@property (readonly) SharedCoreFoodConfig *foodConfig __attribute__((swift_name("foodConfig")));
@property (readonly) SharedCoreMapConfig *mapConfig __attribute__((swift_name("mapConfig")));
@property (readonly) int64_t tickLimit __attribute__((swift_name("tickLimit")));
@property (readonly) int64_t tickTime __attribute__((swift_name("tickTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDesiredCellsState")))
@interface SharedCoreDesiredCellsState : SharedBase
- (instancetype)initWithMyCells:(NSArray<SharedCoreCellActivity *> *)myCells __attribute__((swift_name("init(myCells:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedCoreCellActivity *> *)component1 __attribute__((swift_name("component1()")));
- (SharedCoreDesiredCellsState *)doCopyMyCells:(NSArray<SharedCoreCellActivity *> *)myCells __attribute__((swift_name("doCopy(myCells:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCoreCellActivity *> *myCells __attribute__((swift_name("myCells")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMapState")))
@interface SharedCoreMapState : SharedBase
- (instancetype)initWithGameTick:(int32_t)gameTick myCells:(NSArray<SharedCoreMyCell *> *)myCells alienCells:(NSArray<SharedCoreAlienCell *> *)alienCells food:(NSArray<SharedCoreFood *> *)food __attribute__((swift_name("init(gameTick:myCells:alienCells:food:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedCoreMyCell *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedCoreAlienCell *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedCoreFood *> *)component4 __attribute__((swift_name("component4()")));
- (SharedCoreMapState *)doCopyGameTick:(int32_t)gameTick myCells:(NSArray<SharedCoreMyCell *> *)myCells alienCells:(NSArray<SharedCoreAlienCell *> *)alienCells food:(NSArray<SharedCoreFood *> *)food __attribute__((swift_name("doCopy(gameTick:myCells:alienCells:food:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCoreAlienCell *> *alienCells __attribute__((swift_name("alienCells")));
@property (readonly) NSArray<SharedCoreFood *> *food __attribute__((swift_name("food")));
@property (readonly) int32_t gameTick __attribute__((swift_name("gameTick")));
@property (readonly) NSArray<SharedCoreMyCell *> *myCells __attribute__((swift_name("myCells")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCellConfig")))
@interface SharedCoreCellConfig : SharedBase
- (instancetype)initWithMassToRadius:(float)massToRadius toEatDiff:(float)toEatDiff collisionOffset:(float)collisionOffset minEatEfficiency:(float)minEatEfficiency maxEatEfficiency:(float)maxEatEfficiency energyToEatEfficiency:(float)energyToEatEfficiency minMass:(float)minMass maxMass:(float)maxMass energyToMass:(float)energyToMass minSpeed:(float)minSpeed maxSpeed:(float)maxSpeed energyToMaxSpeed:(float)energyToMaxSpeed minPower:(float)minPower maxPower:(float)maxPower energyToPower:(float)energyToPower maxVolatilization:(float)maxVolatilization minVolatilization:(float)minVolatilization energyToVolatilization:(float)energyToVolatilization __attribute__((swift_name("init(massToRadius:toEatDiff:collisionOffset:minEatEfficiency:maxEatEfficiency:energyToEatEfficiency:minMass:maxMass:energyToMass:minSpeed:maxSpeed:energyToMaxSpeed:minPower:maxPower:energyToPower:maxVolatilization:minVolatilization:energyToVolatilization:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float collisionOffset __attribute__((swift_name("collisionOffset")));
@property (readonly) float energyToEatEfficiency __attribute__((swift_name("energyToEatEfficiency")));
@property (readonly) float energyToMass __attribute__((swift_name("energyToMass")));
@property (readonly) float energyToMaxSpeed __attribute__((swift_name("energyToMaxSpeed")));
@property (readonly) float energyToPower __attribute__((swift_name("energyToPower")));
@property (readonly) float energyToVolatilization __attribute__((swift_name("energyToVolatilization")));
@property (readonly) float massToRadius __attribute__((swift_name("massToRadius")));
@property (readonly) float maxEatEfficiency __attribute__((swift_name("maxEatEfficiency")));
@property (readonly) float maxMass __attribute__((swift_name("maxMass")));
@property (readonly) float maxPower __attribute__((swift_name("maxPower")));
@property (readonly) float maxSpeed __attribute__((swift_name("maxSpeed")));
@property (readonly) float maxVolatilization __attribute__((swift_name("maxVolatilization")));
@property (readonly) float minEatEfficiency __attribute__((swift_name("minEatEfficiency")));
@property (readonly) float minMass __attribute__((swift_name("minMass")));
@property (readonly) float minPower __attribute__((swift_name("minPower")));
@property (readonly) float minSpeed __attribute__((swift_name("minSpeed")));
@property (readonly) float minVolatilization __attribute__((swift_name("minVolatilization")));
@property (readonly) float toEatDiff __attribute__((swift_name("toEatDiff")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMapConfig")))
@interface SharedCoreMapConfig : SharedBase
- (instancetype)initWithHeight:(float)height width:(float)width __attribute__((swift_name("init(height:width:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (SharedCoreMapConfig *)doCopyHeight:(float)height width:(float)width __attribute__((swift_name("doCopy(height:width:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFoodConfig")))
@interface SharedCoreFoodConfig : SharedBase
- (instancetype)initWithMass:(float)mass __attribute__((swift_name("init(mass:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float mass __attribute__((swift_name("mass")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCellActivity")))
@interface SharedCoreCellActivity : SharedBase
- (instancetype)initWithCellId:(id)cellId velocity:(SharedCoreVelocity *)velocity __attribute__((swift_name("init(cellId:velocity:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCellId:(id)cellId speed:(float)speed velocity:(SharedCoreVelocity * _Nullable)velocity growIntention:(SharedCoreGrowIntention * _Nullable)growIntention additionalAction:(SharedCoreMoveAction * _Nullable)additionalAction __attribute__((swift_name("init(cellId:speed:velocity:growIntention:additionalAction:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (SharedCoreVelocity * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedCoreGrowIntention * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedCoreMoveAction * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedCoreCellActivity *)doCopyCellId:(id)cellId speed:(float)speed velocity:(SharedCoreVelocity * _Nullable)velocity growIntention:(SharedCoreGrowIntention * _Nullable)growIntention additionalAction:(SharedCoreMoveAction * _Nullable)additionalAction __attribute__((swift_name("doCopy(cellId:speed:velocity:growIntention:additionalAction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCoreMoveAction * _Nullable additionalAction __attribute__((swift_name("additionalAction")));
@property (readonly) id cellId __attribute__((swift_name("cellId")));
@property (readonly) SharedCoreGrowIntention * _Nullable growIntention __attribute__((swift_name("growIntention")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@property (readonly) SharedCoreVelocity * _Nullable velocity __attribute__((swift_name("velocity")));
@end;

__attribute__((swift_name("CoreCell")))
@interface SharedCoreCell : SharedBase
- (instancetype)initWithCellId:(id)cellId property:(SharedCoreCellProperty *)property __attribute__((swift_name("init(cellId:property:)"))) __attribute__((objc_designated_initializer));
- (double)distanceToCell:(SharedCoreCell * _Nullable)cell __attribute__((swift_name("distanceTo(cell:)")));
- (SharedCoreVelocity *)moveToCell:(SharedCoreCell * _Nullable)cell __attribute__((swift_name("moveTo(cell:)")));
@property (readonly) id cellId __attribute__((swift_name("cellId")));
@property (readonly) SharedCoreCellProperty *property __attribute__((swift_name("property")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMyCell")))
@interface SharedCoreMyCell : SharedCoreCell
- (instancetype)initWithCellId:(id)cellId property:(SharedCoreCellProperty *)property availableEnergy:(float)availableEnergy canSplit:(BOOL)canSplit canMerge:(BOOL)canMerge mergeTimer:(int64_t)mergeTimer __attribute__((swift_name("init(cellId:property:availableEnergy:canSplit:canMerge:mergeTimer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCellId:(id)cellId property:(SharedCoreCellProperty *)property __attribute__((swift_name("init(cellId:property:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id)component1 __attribute__((swift_name("component1()")));
- (SharedCoreCellProperty *)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (SharedCoreMyCell *)doCopyCellId:(id)cellId property:(SharedCoreCellProperty *)property availableEnergy:(float)availableEnergy canSplit:(BOOL)canSplit canMerge:(BOOL)canMerge mergeTimer:(int64_t)mergeTimer __attribute__((swift_name("doCopy(cellId:property:availableEnergy:canSplit:canMerge:mergeTimer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float availableEnergy __attribute__((swift_name("availableEnergy")));
@property (readonly) BOOL canMerge __attribute__((swift_name("canMerge")));
@property (readonly) BOOL canSplit __attribute__((swift_name("canSplit")));
@property (readonly) id cellId __attribute__((swift_name("cellId")));
@property (readonly) int64_t mergeTimer __attribute__((swift_name("mergeTimer")));
@property (readonly) SharedCoreCellProperty *property __attribute__((swift_name("property")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAlienCell")))
@interface SharedCoreAlienCell : SharedCoreCell
- (instancetype)initWithCellId:(id)cellId property:(SharedCoreCellProperty *)property __attribute__((swift_name("init(cellId:property:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()")));
- (SharedCoreCellProperty *)component2 __attribute__((swift_name("component2()")));
- (SharedCoreAlienCell *)doCopyCellId:(id)cellId property:(SharedCoreCellProperty *)property __attribute__((swift_name("doCopy(cellId:property:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id cellId __attribute__((swift_name("cellId")));
@property (readonly) SharedCoreCellProperty *property __attribute__((swift_name("property")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFood")))
@interface SharedCoreFood : SharedBase
- (instancetype)initWithId:(NSString *)id mass:(float)mass position:(SharedCorePosition *)position __attribute__((swift_name("init(id:mass:position:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (SharedCorePosition *)component3 __attribute__((swift_name("component3()")));
- (SharedCoreFood *)doCopyId:(NSString *)id mass:(float)mass position:(SharedCorePosition *)position __attribute__((swift_name("doCopy(id:mass:position:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) float mass __attribute__((swift_name("mass")));
@property (readonly) SharedCorePosition *position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVelocity")))
@interface SharedCoreVelocity : SharedBase
- (instancetype)initWithX:(SharedFloat * _Nullable)x y:(SharedFloat * _Nullable)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCoreVelocityCompanion *companion __attribute__((swift_name("companion")));
- (SharedFloat * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedFloat * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedCoreVelocity *)doCopyX:(SharedFloat * _Nullable)x y:(SharedFloat * _Nullable)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedFloat * _Nullable x __attribute__((swift_name("x")));
@property (readonly) SharedFloat * _Nullable y __attribute__((swift_name("y")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGrowIntention")))
@interface SharedCoreGrowIntention : SharedBase
- (instancetype)initWithEatEfficiency:(SharedFloat * _Nullable)eatEfficiency maxSpeed:(SharedFloat * _Nullable)maxSpeed power:(SharedFloat * _Nullable)power mass:(SharedFloat * _Nullable)mass volatilization:(SharedFloat * _Nullable)volatilization __attribute__((swift_name("init(eatEfficiency:maxSpeed:power:mass:volatilization:)"))) __attribute__((objc_designated_initializer));
- (SharedFloat * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedFloat * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFloat * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedFloat * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedFloat * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedCoreGrowIntention *)doCopyEatEfficiency:(SharedFloat * _Nullable)eatEfficiency maxSpeed:(SharedFloat * _Nullable)maxSpeed power:(SharedFloat * _Nullable)power mass:(SharedFloat * _Nullable)mass volatilization:(SharedFloat * _Nullable)volatilization __attribute__((swift_name("doCopy(eatEfficiency:maxSpeed:power:mass:volatilization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedFloat * _Nullable eatEfficiency __attribute__((swift_name("eatEfficiency")));
@property (readonly) SharedFloat * _Nullable mass __attribute__((swift_name("mass")));
@property (readonly) SharedFloat * _Nullable maxSpeed __attribute__((swift_name("maxSpeed")));
@property (readonly) SharedFloat * _Nullable power __attribute__((swift_name("power")));
@property (readonly) SharedFloat * _Nullable volatilization __attribute__((swift_name("volatilization")));
@end;

__attribute__((swift_name("CoreMoveAction")))
@interface SharedCoreMoveAction : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCellProperty")))
@interface SharedCoreCellProperty : SharedBase
- (instancetype)initWithMass:(float)mass radius:(float)radius speed:(float)speed position:(SharedCorePosition *)position velocity:(SharedCoreVelocity *)velocity eatEfficiency:(float)eatEfficiency power:(float)power __attribute__((swift_name("init(mass:radius:speed:position:velocity:eatEfficiency:power:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (SharedCorePosition *)component4 __attribute__((swift_name("component4()")));
- (SharedCoreVelocity *)component5 __attribute__((swift_name("component5()")));
- (float)component6 __attribute__((swift_name("component6()")));
- (float)component7 __attribute__((swift_name("component7()")));
- (SharedCoreCellProperty *)doCopyMass:(float)mass radius:(float)radius speed:(float)speed position:(SharedCorePosition *)position velocity:(SharedCoreVelocity *)velocity eatEfficiency:(float)eatEfficiency power:(float)power __attribute__((swift_name("doCopy(mass:radius:speed:position:velocity:eatEfficiency:power:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float eatEfficiency __attribute__((swift_name("eatEfficiency")));
@property (readonly) float mass __attribute__((swift_name("mass")));
@property (readonly) SharedCorePosition *position __attribute__((swift_name("position")));
@property (readonly) float power __attribute__((swift_name("power")));
@property (readonly) float radius __attribute__((swift_name("radius")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@property (readonly) SharedCoreVelocity *velocity __attribute__((swift_name("velocity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePosition")))
@interface SharedCorePosition : SharedBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (SharedCorePosition *)doCopyX:(float)x y:(float)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVelocity.Companion")))
@interface SharedCoreVelocityCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCoreVelocityCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedCoreVelocity *Default __attribute__((swift_name("Default")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
