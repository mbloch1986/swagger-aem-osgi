//
// ComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties: Codable {

    public var cqCommerceAssetHandlerFallback: ConfigNodePropertyString?

    public init(cqCommerceAssetHandlerFallback: ConfigNodePropertyString?) {
        self.cqCommerceAssetHandlerFallback = cqCommerceAssetHandlerFallback
    }

    public enum CodingKeys: String, CodingKey { 
        case cqCommerceAssetHandlerFallback = "cq.commerce.asset.handler.fallback"
    }


}

