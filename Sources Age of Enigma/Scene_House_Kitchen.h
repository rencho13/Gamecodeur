/*
 *  Scene_House_Kitchen.h
 *  enigma
 *
 *  Created by Rockford on 20/05/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEKITCHEN_H
#define  _ENIGMA_SCENEKITCHEN_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class SceneKitchen : public EScene {
public:
   SceneKitchen(ESceneDirector *lpSceneDirector);
   ~SceneKitchen();
   
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