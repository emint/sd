/*
 * StoneTile.h
 *
 *  Created on: Apr 20, 2012
 *      Author: emint
 */

#ifndef STONETILE_H_
#define STONETILE_H_

// Open Asset Import Library
#include <assimp/assimp.hpp>
#include <assimp/aiScene.h>
#include <assimp/aiPostProcess.h>

#include "Framework.h"

#include "Mesh3DS.h"
#include "Shader.h"

class StoneTile {
  public:
    StoneTile();
    virtual ~StoneTile();

    /**
     * Displays the tile
     */
    void render();
  private:
    /**
     * Shader that does parallax
     */
    Shader* shader;

    /**
     * Tile Mesh
     */
    Mesh3DS tileMesh;

    /**
     * Diffuse texture
     */
    sf::Image diffuse;

    /**
     * Renders one node of the mesh
     */
    void nodeRender(aiNode* node);

    /**
     * Sets mesh vertex data like position
     */
    void setMeshData(u_int meshIdx);

    /**
     * Sets the textures for the renderer
     */
    void setTextures();
};

#endif /* STONETILE_H_ */