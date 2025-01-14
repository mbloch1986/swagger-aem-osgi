# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"cq.pagesupdatehandler.imageresourcetypes",
    :"cq.pagesupdatehandler.productresourcetypes",
    :"cq.pagesupdatehandler.videoresourcetypes",
    :"cq.pagesupdatehandler.dynamicsequenceresourcetypes",
    :"cq.pagesupdatehandler.previewmodepaths"
  ]

  @type t :: %__MODULE__{
    :"cq.pagesupdatehandler.imageresourcetypes" => ConfigNodePropertyArray,
    :"cq.pagesupdatehandler.productresourcetypes" => ConfigNodePropertyArray,
    :"cq.pagesupdatehandler.videoresourcetypes" => ConfigNodePropertyArray,
    :"cq.pagesupdatehandler.dynamicsequenceresourcetypes" => ConfigNodePropertyArray,
    :"cq.pagesupdatehandler.previewmodepaths" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"cq.pagesupdatehandler.imageresourcetypes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"cq.pagesupdatehandler.productresourcetypes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"cq.pagesupdatehandler.videoresourcetypes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"cq.pagesupdatehandler.dynamicsequenceresourcetypes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"cq.pagesupdatehandler.previewmodepaths", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

