/*
 *  Scene_House_Attic_Pentacle.h
 *  enigma
 *
 *  Created by Rockford on 04/01/11.
 *  Copyright 2011 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEATTICPENTACLE_H
#define  _ENIGMA_SCENEATTICPENTACLE_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class Scene_House_Attic_Pentacle: public EScene {
public:
   Scene_House_Attic_Pentacle(ESceneDirector *lpSceneDirector);
   ~Scene_House_Attic_Pentacle();
   
   void Init ();
   void Close ();
   
   /** 3 steps rendering **/
   void Check ();
   void Logic ();
   void Draw ();
   
   bool ObjectClicked(const char *szObjectName, float x, float y);
   bool ObjectOver(char *szObjectName, float x, float y);
   bool ItemUsed(const char *szItemName, const char *szObjectName);
   void MiniGameDone(const char *szGameName, bool bIsRevolved);
   
   bool IsNeedIHM()
   {
      return true;
   }
private:
   KGraphic *_lpBgGraphic;
   
protected:
   
};

#endif