//
// ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties: Codable {

    public var createPreviewEnabled: ConfigNodePropertyBoolean?
    public var updatePreviewEnabled: ConfigNodePropertyBoolean?
    public var queueSize: ConfigNodePropertyInteger?
    public var folderPreviewRenditionRegex: ConfigNodePropertyString?

    public init(createPreviewEnabled: ConfigNodePropertyBoolean?, updatePreviewEnabled: ConfigNodePropertyBoolean?, queueSize: ConfigNodePropertyInteger?, folderPreviewRenditionRegex: ConfigNodePropertyString?) {
        self.createPreviewEnabled = createPreviewEnabled
        self.updatePreviewEnabled = updatePreviewEnabled
        self.queueSize = queueSize
        self.folderPreviewRenditionRegex = folderPreviewRenditionRegex
    }


}

