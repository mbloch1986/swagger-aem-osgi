//
// ComAdobeCqSocialForumDispatcherImplFlushOperationsProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSocialForumDispatcherImplFlushOperationsProperties: Codable {

    public var extensionOrder: ConfigNodePropertyInteger?
    public var flushForumontopic: ConfigNodePropertyBoolean?

    public init(extensionOrder: ConfigNodePropertyInteger?, flushForumontopic: ConfigNodePropertyBoolean?) {
        self.extensionOrder = extensionOrder
        self.flushForumontopic = flushForumontopic
    }

    public enum CodingKeys: String, CodingKey { 
        case extensionOrder = "extension.order"
        case flushForumontopic = "flush.forumontopic"
    }


}
