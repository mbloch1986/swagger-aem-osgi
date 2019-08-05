<?php

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 */
class ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties
{
    /**
     * @DTA\Data(field="delete.name.regexps", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\ConfigNodePropertyArray::class})
     * @DTA\Validator(name="Dictionary", options={"type":\App\DTO\ConfigNodePropertyArray::class})
     * @var \App\DTO\ConfigNodePropertyArray
     */
    public $delete_name_regexps;
}