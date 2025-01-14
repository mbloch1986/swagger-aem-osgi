package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo._

case class ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplProperties])

object ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfoCodecJson: CodecJson[ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo] = CodecJson.derive[ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo]
  implicit val ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfoDecoder: EntityDecoder[ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo] = jsonOf[ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo]
  implicit val ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfoEncoder: EntityEncoder[ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo] = jsonEncoderOf[ComDayCqDamCoreImplUiPreviewFolderPreviewUpdaterImplInfo]
}
