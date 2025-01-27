//
// ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties: Codable {

    public var inboxImplTypeproviderRegistrypaths: ConfigNodePropertyArray?
    public var inboxImplTypeproviderLegacypaths: ConfigNodePropertyArray?
    public var inboxImplTypeproviderDefaulturlFailureitem: ConfigNodePropertyString?
    public var inboxImplTypeproviderDefaulturlWorkitem: ConfigNodePropertyString?
    public var inboxImplTypeproviderDefaulturlTask: ConfigNodePropertyString?

    public init(inboxImplTypeproviderRegistrypaths: ConfigNodePropertyArray?, inboxImplTypeproviderLegacypaths: ConfigNodePropertyArray?, inboxImplTypeproviderDefaulturlFailureitem: ConfigNodePropertyString?, inboxImplTypeproviderDefaulturlWorkitem: ConfigNodePropertyString?, inboxImplTypeproviderDefaulturlTask: ConfigNodePropertyString?) {
        self.inboxImplTypeproviderRegistrypaths = inboxImplTypeproviderRegistrypaths
        self.inboxImplTypeproviderLegacypaths = inboxImplTypeproviderLegacypaths
        self.inboxImplTypeproviderDefaulturlFailureitem = inboxImplTypeproviderDefaulturlFailureitem
        self.inboxImplTypeproviderDefaulturlWorkitem = inboxImplTypeproviderDefaulturlWorkitem
        self.inboxImplTypeproviderDefaulturlTask = inboxImplTypeproviderDefaulturlTask
    }

    public enum CodingKeys: String, CodingKey { 
        case inboxImplTypeproviderRegistrypaths = "inbox.impl.typeprovider.registrypaths"
        case inboxImplTypeproviderLegacypaths = "inbox.impl.typeprovider.legacypaths"
        case inboxImplTypeproviderDefaulturlFailureitem = "inbox.impl.typeprovider.defaulturl.failureitem"
        case inboxImplTypeproviderDefaulturlWorkitem = "inbox.impl.typeprovider.defaulturl.workitem"
        case inboxImplTypeproviderDefaulturlTask = "inbox.impl.typeprovider.defaulturl.task"
    }


}

