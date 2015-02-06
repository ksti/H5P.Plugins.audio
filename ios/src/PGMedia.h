//
//  PGMedia.h
//  Pandora
//
//  Created by lxz on 13-3-6.
//
//

#import "PGPlugin.h"
#import "PGMethod.h"
#import <AVFoundation/AVFoundation.h>

typedef NS_ENUM(NSInteger, PGAudioOutput) {
    PGAudioOutputSpeaker,
    PGAudioOutputEarpiece
};

@interface PGAudio : PGPlugin <AVAudioPlayerDelegate>
{
    NSMutableDictionary*   m_pPlayerDic;
    NSMutableDictionary*   m_pRecorderDic;
    NSMutableDictionary*   m_pPlayerCallbackID;
}
@end
