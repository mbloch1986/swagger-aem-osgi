package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo._

case class ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties])

object ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfoCodecJson: CodecJson[ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo] = CodecJson.derive[ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo]
  implicit val ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfoDecoder: EntityDecoder[ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo] = jsonOf[ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo]
  implicit val ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfoEncoder: EntityEncoder[ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo] = jsonEncoderOf[ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatInfo]
}