/**
 *	A Happy Weekend Path Tracer
 *
 *	Author: Neil
 *	Date:	May, 2019
 *	See:	https://neil3d.github.io
 */

#pragma once

namespace Neil3D {

	class Scene;
	class SceneNode;

	class SceneVisitor {
	public:
		virtual ~SceneVisitor() {}

		virtual void acceptSceneNode(Scene* scene, SceneNode* node) = 0;
	};

}  // end of namespace Neil3D