//
//  Car.h
//  Vehicles
//
//  Created by Taylor Benna on 2016-05-06.
//  Copyright © 2016 Designated Nerd Software. All rights reserved.
//

#import "Vehicle.h"

@interface Car : Vehicle
    @property (nonatomic, assign) BOOL isConvertible;
    @property (nonatomic, assign) BOOL isHatchback;
    @property (nonatomic, assign) BOOL hasSunroof;
    @property (nonatomic, assign) NSInteger numberOfDoors;
@end
